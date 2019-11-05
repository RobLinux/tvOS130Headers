/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreAccessories.framework/Support/accessoryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <accessoryd/NSXPCListenerDelegate.h>

@class NSString, NSXPCListener, NSCountedSet;

@interface ACCFeatureServer : NSObject <NSXPCListenerDelegate> {

	NSString* _xpcServiceName;
	NSXPCListener* _listener;
	const char* _notification;
	int _notificationToken;
	BOOL _isServerStarted;
	int _featureUserCount;
	NSCountedSet* _subFeatureSubscribers;

}

@property (assign,nonatomic) BOOL isServerStarted;                              //@synthesize isServerStarted=_isServerStarted - In the implementation block
@property (assign,nonatomic) int featureUserCount;                              //@synthesize featureUserCount=_featureUserCount - In the implementation block
@property (nonatomic,retain) NSCountedSet * subFeatureSubscribers;              //@synthesize subFeatureSubscribers=_subFeatureSubscribers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedServer;
-(void)dealloc;
-(void)removeSubscriber:(id)arg1 ;
-(void)addSubscriber:(id)arg1 ;
-(void)startServer;
-(void)sendUpdatedSubscriberList;
-(id)initWithXPCServiceName:(id)arg1 andFeatureNotification:(const char*)arg2 ;
-(NSCountedSet *)subFeatureSubscribers;
-(void)incrementUserCount;
-(int)featureUserCount;
-(void)decrementUserCount;
-(BOOL)isServerStarted;
-(void)setIsServerStarted:(BOOL)arg1 ;
-(void)setFeatureUserCount:(int)arg1 ;
-(void)suspendServer;
-(void)setSubFeatureSubscribers:(NSCountedSet *)arg1 ;
@end
