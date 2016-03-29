# BeaconKit

[![CI Status](http://img.shields.io/travis/Rob/BeaconKit.svg?style=flat)](https://travis-ci.org/Rob/BeaconKit)
[![Version](https://img.shields.io/cocoapods/v/BeaconKit.svg?style=flat)](http://cocoapods.org/pods/BeaconKit)
[![License](https://img.shields.io/cocoapods/l/BeaconKit.svg?style=flat)](http://cocoapods.org/pods/BeaconKit)
[![Platform](https://img.shields.io/cocoapods/p/BeaconKit.svg?style=flat)](http://cocoapods.org/pods/BeaconKit)

## Usage

To run the example project, clone the repo, and run `pod install` from the Example directory first.

## Requirements

## Installation

BeaconKit is available through [CocoaPods](http://cocoapods.org). To install
it, simply add the following line to your Podfile:

```ruby
pod "BeaconKit"
```

#### Objective-C

Use `#import <BeaconKit/BeaconKit.h>` in your implementation files.


#### Swift

In Swift, you need to add `#import <BeaconKit/BeaconKit.h>` to an *Objective-C Bridging Header* instead:

* right-click on the "Support Files" group in the navigator, and choose "New File…"
* pick a "Header File" from the "iOS - Source" section, and save it as "ObjCBridge.h"
* add the `#import <BeaconKit/BeaconKit.h>` line to the newly created file
* select your project in the navigator and go to "Build Settings"
* look for the "Objective-C Bridging Header" setting and set it to `${PROJECT_NAME}/ObjCBridge.h`



## Usage

### Launch Beacon Manager

Instantiate the beacon manager and start monitoring.

`VNBeaconManager* manager = [VNBeaconManager sharedInstance];`

`manager.delegate = self;`

`[manager startupWithToken:@"<my-token>"];`

### Monitor Checkins

Implement the following `VNBeaconManagerDelegate` methods:

`- (void)didCheckinToVenueWithId:(NSString *)venueId;`

`- (void)didCheckoutToVenueWithId:(NSString *)venueId;`

### Coupons

Retrieve coupons for the venue a customer has encountered.

`+ (void)couponsForVenue:(NSString* )venueId
              withToken:(NSString *)token
                success:(void (^)(NSArray* result))success
                failure:(void (^)(NSError* error))failure;`
                

## Author

Vendasta, notabl@vendasta.com

## License

BeaconKit is available under the MIT license. See the LICENSE file for more info.
