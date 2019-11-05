/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKitLegacy/WebKitLegacy-Structs.h>
#import <WebKitLegacy/WebDeviceOrientationProviderMock.h>

@protocol WebDeviceOrientationProviderMock <WebDeviceOrientationProvider>
@required
-(void)setController:(DeviceOrientationControllerRef)arg1;

@end

#import <WebKitLegacy/WebDeviceOrientationProvider.h>

@class WebDeviceOrientationProviderMockInternal, NSString;

@interface WebDeviceOrientationProviderMock : NSObject <WebDeviceOrientationProviderMock, WebDeviceOrientationProvider> {

	WebDeviceOrientationProviderMockInternal* m_internal;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shared;
-(id)init;
-(void)dealloc;
-(void)setOrientation:(id)arg1 ;
-(void)setController:(DeviceOrientationControllerRef)arg1 ;
-(void)startUpdating;
-(void)stopUpdating;
-(id)lastOrientation;
@end

