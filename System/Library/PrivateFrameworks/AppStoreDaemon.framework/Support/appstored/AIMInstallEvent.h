/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/AIMEvent.h>

@class NSNumber;

@interface AIMInstallEvent : AIMEvent {

	BOOL _deltaPackage;

}

@property (assign) BOOL deltaPackage;               //@synthesize deltaPackage=_deltaPackage - In the implementation block
@property (retain) NSNumber * drmMode; 
-(id)packageURL;
-(void)setPackageURL:(id)arg1 ;
-(void)setDeltaPackage:(BOOL)arg1 ;
-(void)setDrmMode:(NSNumber *)arg1 ;
-(id)copyMetricsDictionary;
-(BOOL)deltaPackage;
-(NSNumber *)drmMode;
@end

