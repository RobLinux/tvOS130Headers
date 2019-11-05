/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HMFMessageReceiver.h>
#import <HomeKit/NSSecureCoding.h>
#import <HomeKit/HMObjectMerge.h>
#import <HomeKit/HMMutableApplicationData.h>

@class HMFUnfairLock, NSUUID, NSString, HMHome, HMApplicationData, NSDate, _HMContext, HMMutableArray, NSDictionary, NSSet;

@interface HMActionSet : NSObject <HMFMessageReceiver, NSSecureCoding, HMObjectMerge, HMMutableApplicationData> {

	HMFUnfairLock* _lock;
	BOOL _executionInProgress;
	NSUUID* _uniqueIdentifier;
	NSString* _name;
	HMHome* _home;
	HMApplicationData* _applicationData;
	NSDate* _lastExecutionDate;
	NSString* _actionSetType;
	_HMContext* _context;
	HMMutableArray* _currentActions;
	NSUUID* _uuid;

}

@property (copy,readonly) NSDictionary * shortcutsDictionaryRepresentation; 
@property (nonatomic,retain) _HMContext * context;                                            //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSString * name;                                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) HMMutableArray * currentActions;                                 //@synthesize currentActions=_currentActions - In the implementation block
@property (assign,nonatomic,__weak) HMHome * home;                                            //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                                 //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) BOOL executionInProgress;                                        //@synthesize executionInProgress=_executionInProgress - In the implementation block
@property (nonatomic,copy,readonly) NSSet * actions; 
@property (getter=isExecuting,nonatomic,readonly) BOOL executing; 
@property (nonatomic,copy,readonly) NSString * actionSetType;                                 //@synthesize actionSetType=_actionSetType - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;                                //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastExecutionDate;                               //@synthesize lastExecutionDate=_lastExecutionDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (nonatomic,readonly) HMApplicationData * applicationData; 
@property (copy,readonly) NSUUID * applicationDataIdentifier; 
+(BOOL)supportsSecureCoding;
+(id)actionSetFromProtoBuf:(id)arg1 home:(id)arg2 ;
+(id)allowedActionClasses;
+(id)shortcutsComponentActionSet;
-(NSString *)name;
-(id)init;
-(void)dealloc;
-(void)_invalidate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(BOOL)isExecuting;
-(NSUUID *)uuid;
-(_HMContext *)context;
-(void)setContext:(_HMContext *)arg1 ;
-(NSSet *)actions;
-(HMHome *)home;
-(void)setHome:(HMHome *)arg1 ;
-(NSString *)actionSetType;
-(HMApplicationData *)applicationData;
-(void)setApplicationData:(HMApplicationData *)arg1 ;
-(void)updateApplicationData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(BOOL)requiresDeviceUnlock;
-(id)encodeAsProtoBuf;
-(NSDictionary *)shortcutsDictionaryRepresentation;
-(id)initWithShortcutsDictionaryRepresentation:(id)arg1 home:(id)arg2 ;
-(void)_registerNotificationHandlers;
-(void)__configureWithContext:(id)arg1 home:(id)arg2 ;
-(void)_unconfigure;
-(void)_updateName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateAction:(id)arg1 changes:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSUUID *)applicationDataIdentifier;
-(id)initWithName:(id)arg1 type:(id)arg2 uuid:(id)arg3 ;
-(HMMutableArray *)currentActions;
-(void)setCurrentActions:(HMMutableArray *)arg1 ;
-(void)_addAction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_doAddAction:(id)arg1 uuid:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_removeAction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_doRemoveActionWithUUID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setExecutionInProgress:(BOOL)arg1 ;
-(void)setLastExecutionDate:(NSDate *)arg1 ;
-(void)_handleActionAddedNotification:(id)arg1 ;
-(void)_handleActionRemovedNotification:(id)arg1 ;
-(void)_handleActionUpdatedNotification:(id)arg1 ;
-(void)_handleActionSetRenamedNotification:(id)arg1 ;
-(void)_handleActionSetStartExecutionNotification:(id)arg1 ;
-(void)_handleActionSetExecutedNotification:(id)arg1 ;
-(BOOL)executionInProgress;
-(NSDate *)lastExecutionDate;
-(void)addAction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeAction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
