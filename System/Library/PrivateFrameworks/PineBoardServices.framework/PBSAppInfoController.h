/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PineBoardServices/PBSAppInfoDelegateServiceInterface.h>

@protocol OS_dispatch_queue;
@class PBSAppInfoServiceProxy, NSObject, NSDictionary, NSHashTable, PBSAppInfoConfiguration, NSString;

@interface PBSAppInfoController : NSObject <PBSAppInfoDelegateServiceInterface> {

	PBSAppInfoServiceProxy* _appInfoServiceProxy;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _observerQueue;
	NSDictionary* _queue_appInfos;
	NSHashTable* _queue_observers;
	PBSAppInfoConfiguration* _queue_appInfoConfiguration;

}

@property (nonatomic,readonly) PBSAppInfoServiceProxy * appInfoServiceProxy;                      //@synthesize appInfoServiceProxy=_appInfoServiceProxy - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> accessQueue;                          //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> observerQueue;                        //@synthesize observerQueue=_observerQueue - In the implementation block
@property (nonatomic,readonly) NSDictionary * queue_appInfos;                                     //@synthesize queue_appInfos=_queue_appInfos - In the implementation block
@property (nonatomic,readonly) NSHashTable * queue_observers;                                     //@synthesize queue_observers=_queue_observers - In the implementation block
@property (nonatomic,readonly) PBSAppInfoConfiguration * queue_appInfoConfiguration;              //@synthesize queue_appInfoConfiguration=_queue_appInfoConfiguration - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * appInfos; 
@property (nonatomic,readonly) PBSAppInfoConfiguration * configuration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(NSString *)debugDescription;
-(NSString *)description;
-(id)init;
-(id)_init;
-(PBSAppInfoConfiguration *)configuration;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(NSObject*<OS_dispatch_queue>)observerQueue;
-(void)_configureRemoteProxy:(id)arg1 ;
-(void)appInfoServiceDidUpdateAppInfo:(id)arg1 ;
-(PBSAppInfoServiceProxy *)appInfoServiceProxy;
-(void)_handleUpdate:(id)arg1 ;
-(NSDictionary *)appInfos;
-(NSDictionary *)queue_appInfos;
-(NSHashTable *)queue_observers;
-(PBSAppInfoConfiguration *)queue_appInfoConfiguration;
@end

