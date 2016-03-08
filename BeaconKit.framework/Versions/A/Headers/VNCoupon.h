//
//  VNCoupon.h
//  Pods
//
//  Created by Rob Sandhu on 2016-02-24.
//
//

#import <Foundation/Foundation.h>

@interface VNCoupon : NSObject

@property (nonatomic, strong) NSString* imageUrl;
@property (nonatomic, strong) NSString* title;
@property (nonatomic, strong) NSString* start;
@property (nonatomic, strong) NSString* end;
@property (nonatomic, strong) NSNumber* expiry;
@property (nonatomic, strong) NSString* details;
@property (nonatomic, strong) NSString* distance;
@property (nonatomic, strong) NSString* category;
@property (nonatomic, strong) NSString* venueId;
@property (nonatomic, strong) NSString* redemptionId;
@property (nonatomic, strong) NSString* couponId;
@property (nonatomic, strong) NSString* venueName;
@property (nonatomic, strong) NSString* venueAddress;


+ (void)couponsForVenue:(NSString* )venueId
              withToken:(NSString *)token
                success:(void (^)(NSArray* result))success
                failure:(void (^)(NSError* error))failure;

@end
