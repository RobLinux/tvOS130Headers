/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:16 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
#import <GeoServices/GeoServices-Structs.h>
@class NSMutableArray, NSObject;

@interface _GEOURLManifestListener : NSObject {

	NSMutableArray* _handlers;
	os_unfair_lock_s _lock;
	NSObject*<OS_dispatch_source> _timeoutTimer;

}
+(id)sharedListener;
-(id)init;
-(void)waitForManifestWithCallback:(id)arg1 ;
-(void)_finish:(BOOL)arg1 ;
@end

