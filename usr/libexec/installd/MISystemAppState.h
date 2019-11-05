/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:42 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/installd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface MISystemAppState : NSObject {

	NSObject*<OS_dispatch_queue> _appStateQueue;
	NSMutableDictionary* _systemAppStateList;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> appStateQueue;              //@synthesize appStateQueue=_appStateQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * systemAppStateList;                  //@synthesize systemAppStateList=_systemAppStateList - In the implementation block
+(id)sharedList;
-(id)init;
-(NSMutableDictionary *)systemAppStateList;
-(void)setSystemAppStateList:(NSMutableDictionary *)arg1 ;
-(void)_onQueue_setSystemAppStateList:(id)arg1 ;
-(id)_onQueue_systemAppStateList;
-(NSObject*<OS_dispatch_queue>)appStateQueue;
-(id)_onQueue_retrieveSystemAppStateRestoringBackedUpState:(BOOL)arg1 ;
-(id)systemAppStateDictionaryRestoringBackedUpState:(BOOL)arg1 ;
-(void)addIdentifier:(id)arg1 withState:(int)arg2 ;
-(void)removeIdentifiers:(id)arg1 ;
@end

