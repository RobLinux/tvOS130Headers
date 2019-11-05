/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:53 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/securityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <securityd/APSConnectionDelegate.h>

@protocol OctagonAPSConnection;
@class CKKSNearFutureScheduler, NSMutableDictionary, NSMutableSet, NSMapTable, NSString;

@interface OctagonAPSReceiver : NSObject <APSConnectionDelegate> {

	Class _apsConnectionClass;
	id<OctagonAPSConnection> _apsConnection;
	CKKSNearFutureScheduler* _clearStalePushNotifications;
	NSMutableDictionary* _undeliveredUpdates;
	NSMutableSet* _undeliveredCuttlefishUpdates;
	NSMapTable* _zoneMap;
	NSMapTable* _octagonContainerMap;

}

@property (retain) CKKSNearFutureScheduler * clearStalePushNotifications;              //@synthesize clearStalePushNotifications=_clearStalePushNotifications - In the implementation block
@property (retain) NSMutableDictionary * undeliveredUpdates;                           //@synthesize undeliveredUpdates=_undeliveredUpdates - In the implementation block
@property (retain) NSMutableSet * undeliveredCuttlefishUpdates;                        //@synthesize undeliveredCuttlefishUpdates=_undeliveredCuttlefishUpdates - In the implementation block
@property (retain) NSMapTable * zoneMap;                                               //@synthesize zoneMap=_zoneMap - In the implementation block
@property (retain) NSMapTable * octagonContainerMap;                                   //@synthesize octagonContainerMap=_octagonContainerMap - In the implementation block
@property (readonly) Class apsConnectionClass;                                         //@synthesize apsConnectionClass=_apsConnectionClass - In the implementation block
@property (retain) id<OctagonAPSConnection> apsConnection;                             //@synthesize apsConnection=_apsConnection - In the implementation block
@property (readonly) BOOL haveStalePushes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)receiverForEnvironment:(id)arg1 namedDelegatePort:(id)arg2 apsConnectionClass:(Class)arg3 ;
+(id)apsDeliveryQueue;
+(long long)stalePushTimeout;
-(Class)apsConnectionClass;
-(id)registerCuttlefishReceiver:(id)arg1 forContainerName:(id)arg2 ;
-(BOOL)haveStalePushes;
-(id)cuttlefishPushTopics;
-(id)initWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2 apsConnectionClass:(Class)arg3 ;
-(void)reportDroppedPushes:(id)arg1 ;
-(id)registerReceiver:(id)arg1 forZoneID:(id)arg2 ;
-(CKKSNearFutureScheduler *)clearStalePushNotifications;
-(void)setClearStalePushNotifications:(CKKSNearFutureScheduler *)arg1 ;
-(NSMutableDictionary *)undeliveredUpdates;
-(void)setUndeliveredUpdates:(NSMutableDictionary *)arg1 ;
-(NSMutableSet *)undeliveredCuttlefishUpdates;
-(void)setUndeliveredCuttlefishUpdates:(NSMutableSet *)arg1 ;
-(NSMapTable *)zoneMap;
-(void)setZoneMap:(NSMapTable *)arg1 ;
-(NSMapTable *)octagonContainerMap;
-(void)setOctagonContainerMap:(NSMapTable *)arg1 ;
-(id<OctagonAPSConnection>)apsConnection;
-(void)setApsConnection:(id<OctagonAPSConnection>)arg1 ;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4 ;
@end

