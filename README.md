# BoniNotifySDK-iOS
-------
Boni Beacon Notify SDK for iOS devices.

Overview
-------
BoniNotifyManager is main class of the framework. It contains startNotify and stopNotify methods.

Installation
-------
1. Add BoniNotifySDK.framework file to Link Library in Build Phases. Additonally, add following frameworks to your project:
    * Accelerate.framework
    * AdSupport.framework
    * CoreData.framework
    * CoreLocation.framework
    * PassKit.framework
    * SystemConfiguration.framework

2. Add BoniNotifyResource.bundle file to Copy Bundle Resources in Build Phases.

3. Add -ObjC and -all_load flags to Other Linker Flags in Build Settings.

4. Go to your app’s info.plist and add the NSLocationAlwaysUsageDescription key with a message to be displayed in the prompt.

5. Open your Project Settings and go to Capabilities tab, switch on Background Modes and add these:
    * Background fetch

Usage
-------
Add following codes to your AppDelegate.h file.
```objective-c
#import "BoniNotifySDK/BoniNotifyManager.h"
```
```objective-c
@property (strong, nonatomic) BoniNotifyManager *boniNotifyManager;
```

Add following codes to your didFinishLaunchingWithOptions method to start Boni Notify. You should use your app's App Key and App Secret.
```objective-c
- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    self.boniNotifyManager = [[BoniNotifyManager alloc] initWithAppKey:@"APP_KEY" withAppSecret:@"APP_SECRET"];
    self.boniNotifyManager.showOfferWhileAppActive = YES;
    [self.boniNotifyManager startNotify];
    
    UILocalNotification *notification = [launchOptions objectForKey:UIApplicationLaunchOptionsLocalNotificationKey];
    if (notification) {
        [self.boniNotifyManager didFinishLaunchingWithLocalNotification:notification];
    }
    return YES;
}
```

Add following codes to your AppDelegate.m file.
```objective-c
- (void)application:(UIApplication *)application didReceiveLocalNotification:(UILocalNotification *)notification{
    [self.boniNotifyManager didReceiveLocalNotification:notification];
}
```

Important!
-------
This framework uses Improper Advertising Identifier [IDFA] data. You would respect the Limit Ad Tracking setting in iOS during App Store submission.

For more info [click here.](https://developer.apple.com/library/ios/documentation/AdSupport/Reference/ASIdentifierManager_Ref/ASIdentifierManager.html)
