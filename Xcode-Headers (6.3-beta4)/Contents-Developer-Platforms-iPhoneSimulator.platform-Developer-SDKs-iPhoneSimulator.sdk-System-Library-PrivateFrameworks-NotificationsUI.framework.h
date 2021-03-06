//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/NotificationsUI.framework/NotificationsUI
// UUID: A4AA593D-7C12-39DB-A8C1-505FAB1533CE
//
//                           Arch: x86_64
//                Current version: 1.0.0
//          Compatibility version: 1.0.0
//                 Source version: 40.0.0.0.0
//            Minimum iOS version: 8.2.0
//                    SDK version: 8.2.0
//
// Objective-C Garbage Collection: Unsupported
//

@protocol NCBannerAccessoryHostInterface
- (void)_setSticky:(_Bool)arg1;
- (void)_becomeSticky;
- (void)_dismiss;
@end

@protocol NCBannerAccessoryServiceInterface
- (void)_getPreferredContentSizeWithCompletion:(void (^)(double, double))arg1;
- (void)_setContext:(NSDictionary *)arg1;
@end

@protocol NCContentHostInterface
@end

@protocol NCContentServiceInterface
- (void)_getPreferredContentSizeWithCompletion:(void (^)(double, double))arg1;
- (void)_setContext:(NSDictionary *)arg1;
@end

@protocol NCInteractiveNotificationHostDelegate <NSObject>

@optional
- (void)hostViewController:(NCInteractiveNotificationHostViewController *)arg1 didEnable:(_Bool)arg2 actionAtIndex:(unsigned long long)arg3;
- (void)hostViewController:(NCInteractiveNotificationHostViewController *)arg1 didRequestDismissalWithContext:(NSDictionary *)arg2;
- (void)hostViewControllerDidChangePreferredContentSize:(NCInteractiveNotificationHostViewController *)arg1;
@end

@protocol NCInteractiveNotificationHostInterface
- (void)_setActionEnabled:(_Bool)arg1 atIndex:(unsigned long long)arg2;
- (void)_requestProximityMonitoringEnabled:(_Bool)arg1;
- (void)_requestPreferredContentHeight:(double)arg1;
- (void)_dismissWithContext:(NSDictionary *)arg1;
@end

@protocol NCInteractiveNotificationServiceInterface
- (void)_handleActionIdentifier:(NSString *)arg1;
- (void)_handleActionAtIndex:(unsigned long long)arg1;
- (void)_getActionTitlesWithCompletion:(void (^)(NSArray *))arg1;
- (void)_getActionContextWithCompletion:(void (^)(NSDictionary *))arg1;
- (void)_willPresentFromActionIdentifier:(NSString *)arg1;
- (void)_didChangeRevealPercent:(double)arg1;
- (void)_proximityStateDidChange:(_Bool)arg1;
- (void)_interactiveNotificationDidAppear;
- (void)_setModal:(_Bool)arg1;
- (void)_setMaximumHeight:(double)arg1;
- (void)_setContext:(NSDictionary *)arg1;
- (void)_getInitialStateWithCompletion:(void (^)(double, double, _Bool, NCViewServiceDescriptor *, NCViewServiceDescriptor *))arg1;
@end

@protocol NSCoding
- (id)initWithCoder:(NSCoder *)arg1;
- (void)encodeWithCoder:(NSCoder *)arg1;
@end

@protocol NSCopying
- (id)copyWithZone:(struct _NSZone *)arg1;
@end

@protocol NSObject
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;
@property(readonly) unsigned long long hash;
- (struct _NSZone *)zone;
- (unsigned long long)retainCount;
- (id)autorelease;
- (oneway void)release;
- (id)retain;
- (_Bool)respondsToSelector:(SEL)arg1;
- (_Bool)conformsToProtocol:(Protocol *)arg1;
- (_Bool)isMemberOfClass:(Class)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (_Bool)isProxy;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;
- (id)performSelector:(SEL)arg1;
- (id)self;
- (Class)class;
- (_Bool)isEqual:(id)arg1;

@optional
@property(readonly, copy) NSString *debugDescription;
@end

@protocol NSSecureCoding <NSCoding>
+ (_Bool)supportsSecureCoding;
@end

@interface NCBannerAccessoryHostViewController : _UIRemoteViewController <NCBannerAccessoryHostInterface>
{
    id <NCBannerAccessoryHostViewControllerDelegate> _delegate;
}

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
+ (void)requestBannerAccessoryViewControllerWithName:(id)arg1 bundleIdentifier:(id)arg2 context:(id)arg3 completion:(CDUnknownBlockType)arg4;
@property(nonatomic) id <NCBannerAccessoryHostViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_setSticky:(_Bool)arg1;
- (void)_becomeSticky;
- (void)_dismiss;

@end

@interface NCBannerAccessoryViewController : UIViewController <NCBannerAccessoryServiceInterface>
{
    NSDictionary *_context;
}

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
@property(copy, nonatomic) NSDictionary *context; // @synthesize context=_context;
- (void)_getPreferredContentSizeWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setContext:(id)arg1;
- (void)setSticky:(_Bool)arg1;
- (void)becomeSticky;
- (void)dismiss;
- (void)dealloc;

@end

@interface NCInteractiveNotificationViewController : UIViewController <NCInteractiveNotificationServiceInterface>
{
    _Bool _modal;
    NSDictionary *_context;
    double _maximumHeight;
}

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
@property(nonatomic) double maximumHeight; // @synthesize maximumHeight=_maximumHeight;
@property(nonatomic, getter=isModal) _Bool modal; // @synthesize modal=_modal;
@property(copy, nonatomic) NSDictionary *context; // @synthesize context=_context;
- (void)viewDidLoad;
- (void)_willPresentFromActionIdentifier:(id)arg1;
- (void)_handleActionIdentifier:(id)arg1;
- (void)_proximityStateDidChange:(_Bool)arg1;
- (void)_handleActionAtIndex:(unsigned long long)arg1;
- (void)_getActionTitlesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_getActionContextWithCompletion:(CDUnknownBlockType)arg1;
- (void)_didChangeRevealPercent:(double)arg1;
- (void)_interactiveNotificationDidAppear;
- (void)_setMaximumHeight:(double)arg1;
- (void)_setModal:(_Bool)arg1;
- (void)_setContext:(id)arg1;
- (void)_getInitialStateWithCompletion:(CDUnknownBlockType)arg1;
- (id)accessoryViewService;
- (id)inlayViewService;
- (void)handleActionIdentifier:(id)arg1;
- (void)proximityStateDidChange:(_Bool)arg1;
- (void)requestProximityMonitoringEnabled:(_Bool)arg1;
- (void)setActionEnabled:(_Bool)arg1 atIndex:(unsigned long long)arg2;
- (void)handleActionAtIndex:(unsigned long long)arg1;
- (id)actionTitles;
- (id)actionContext;
- (double)bottomOverhangHeight;
- (void)willPresentFromActionIdentifier:(id)arg1;
- (void)didChangeRevealPercent:(double)arg1;
- (void)interactiveNotificationDidAppear;
- (_Bool)showsKeyboard;
- (double)preferredContentHeight;
- (void)requestPreferredContentHeight:(double)arg1;
- (void)dismissWithContext:(id)arg1;
- (void)dealloc;

@end

@interface NCContentViewController : UIViewController <NCContentServiceInterface>
{
    NSDictionary *_context;
}

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
@property(copy, nonatomic) NSDictionary *context; // @synthesize context=_context;
- (void)_getPreferredContentSizeWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setContext:(id)arg1;
- (void)dealloc;

@end

@interface NCInteractiveNotificationHostViewController : _UIRemoteViewController <NCInteractiveNotificationHostInterface, NCInteractiveNotificationHostDelegate>
{
    _Bool _proximityMonitoringEnabled;
    _Bool _showsKeyboard;
    _Bool _modal;
    id <NCInteractiveNotificationHostDelegate> _delegate;
    double _bottomOverhangHeight;
    double _maximumHeight;
    NCViewServiceDescriptor *_inlayViewService;
    NCViewServiceDescriptor *_accessoryViewService;
}

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
+ (void)requestInteractiveNotificationControllerWithName:(id)arg1 bundleIdentifier:(id)arg2 context:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)initialize;
@property(retain, nonatomic) NCViewServiceDescriptor *accessoryViewService; // @synthesize accessoryViewService=_accessoryViewService;
@property(retain, nonatomic) NCViewServiceDescriptor *inlayViewService; // @synthesize inlayViewService=_inlayViewService;
@property(nonatomic) double maximumHeight; // @synthesize maximumHeight=_maximumHeight;
@property(nonatomic, getter=isModal) _Bool modal; // @synthesize modal=_modal;
@property(nonatomic) double bottomOverhangHeight; // @synthesize bottomOverhangHeight=_bottomOverhangHeight;
@property(nonatomic) _Bool showsKeyboard; // @synthesize showsKeyboard=_showsKeyboard;
@property(nonatomic) id <NCInteractiveNotificationHostDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_setProximityMonitoringEnabled:(_Bool)arg1;
- (void)_proximityStateChanged:(id)arg1;
- (void)_setActionEnabled:(_Bool)arg1 atIndex:(unsigned long long)arg2;
- (void)_requestProximityMonitoringEnabled:(_Bool)arg1;
- (void)_requestPreferredContentHeight:(double)arg1;
- (void)_dismissWithContext:(id)arg1;
- (void)willPresentFromActionIdentifier:(id)arg1;
- (void)handleActionIdentifier:(id)arg1;
- (void)handleActionAtIndex:(long long)arg1;
- (void)getActionContextWithCompletion:(CDUnknownBlockType)arg1;
- (void)didChangeRevealPercent:(double)arg1;
- (void)interactiveNotificationDidAppear;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface NCContentHostViewController : _UIRemoteViewController <NCContentHostInterface>
{
}

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
+ (void)requestContentViewControllerWithName:(id)arg1 bundleIdentifier:(id)arg2 context:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end

@interface NCViewServiceDescriptor : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_viewControllerClassName;
    NSString *_bundleIdentifier;
}

+ (_Bool)supportsSecureCoding;
+ (id)descriptorWithViewControllerClassName:(id)arg1 bundleIdentifier:(id)arg2;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, copy, nonatomic) NSString *viewControllerClassName; // @synthesize viewControllerClassName=_viewControllerClassName;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isValid;
- (void)dealloc;
- (id)initWithViewControllerClassName:(id)arg1 bundleIdentifier:(id)arg2;

@end

