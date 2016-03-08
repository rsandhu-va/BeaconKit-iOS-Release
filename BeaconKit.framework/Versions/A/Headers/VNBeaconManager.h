//
//  VNBeaconManager.h
//  BeaconKit
//
//  Created by Rob Sandhu on 2016-02-05.
//  Copyright © 2016 Vendasta. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <EstimoteSDK/EstimoteSDK.h>


/**
 The `VNBeaconManagerDelegate` protocol is adopted by an object that receives checkin events.
 */
@protocol VNBeaconManagerDelegate <NSObject>

@optional
/**
 * Tells the delegate that the user has encountered a Vendasta provisioned beacon and has been checkedin with the corresponding
     venue id - which can be used to retrieve couponds at this venue.
 */
- (void)didCheckinToVenueWithId:(NSString *)venueId;

/**
 * Tells the delegate that the user has been checked out with the corresponding
 venue id.
 */
- (void)didCheckoutToVenueWithId:(NSString *)venueId;

@end


/**
 `VNBeaconManager` monitors the nearby beacons and implements the checkin/checkout functionality.
 
 @warning Instances of `VNBeaconManager` must be started with `-startupWithToken` before beacon monitoring will begin.
 */
@interface VNBeaconManager : NSObject <ESTBeaconManagerDelegate>

+ (instancetype)sharedInstance;


/**
 * Starts monitoring for beacons.
 *
 * Checkin events are delivered to the `<[VNBeaconManagerDelegate didCheckinToVenueWithId:(NSString *)venueId]>` methods of your `<delegate>`.
 *
 * @param token The token associated with Vendasta partner account. This parameter must not be `nil.`
 *
 */
- (void)startupWithToken:(NSString *)token;

/**
 * Shutdown monitoring for beacons.
 */
- (void)shutdown;

/**
 * The delegate object to receive checkin events.
 *
 * @see VNBeaconManagerDelegate
 */
@property (nonatomic, weak) id <VNBeaconManagerDelegate> delegate;


@end
