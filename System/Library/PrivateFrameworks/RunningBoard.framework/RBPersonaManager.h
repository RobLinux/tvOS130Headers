/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:19 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface RBPersonaManager : NSObject {

	long long _personalID;
	NSMutableDictionary* _cachedPersonaIdentifiers;
	NSObject*<OS_dispatch_queue> _lockQueue;

}
-(id)init;
-(void)_fetchData;
-(long long)personaIDForManagedPersona:(id)arg1 ;
@end

