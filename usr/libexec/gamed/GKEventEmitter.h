/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:38 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHashTable, NSMutableArray;

@interface GKEventEmitter : NSObject {

	NSHashTable* _listeners;
	NSMutableArray* _supportedProtocols;
	BOOL _shouldQueue;
	NSMutableArray* _queuedEvents;

}

@property (nonatomic,retain) NSHashTable * listeners;                          //@synthesize listeners=_listeners - In the implementation block
@property (nonatomic,retain) NSMutableArray * supportedProtocols;              //@synthesize supportedProtocols=_supportedProtocols - In the implementation block
@property (assign,nonatomic) BOOL shouldQueue;                                 //@synthesize shouldQueue=_shouldQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * queuedEvents;                    //@synthesize queuedEvents=_queuedEvents - In the implementation block
+(id)eventEmitterForProtocols:(id)arg1 shouldQueue:(BOOL)arg2 ;
+(id)eventEmitterForProtocols:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)dealloc;
-(NSHashTable *)listeners;
-(void)setListeners:(NSHashTable *)arg1 ;
-(void)setShouldQueue:(BOOL)arg1 ;
-(BOOL)shouldQueue;
-(NSMutableArray *)supportedProtocols;
-(void)setSupportedProtocols:(NSMutableArray *)arg1 ;
-(void)registerListener:(id)arg1 ;
-(BOOL)listenerRegisteredForSelector:(SEL)arg1 ;
-(void)unregisterListener:(id)arg1 ;
-(void)unregisterAllListeners;
-(id)methodSignatureForProtocol:(id)arg1 selector:(SEL)arg2 ;
-(id)initWithSupportedProtocols:(id)arg1 shouldQueue:(BOOL)arg2 ;
-(void)setQueuedEvents:(NSMutableArray *)arg1 ;
-(void)dispatchQueuedEventsToListener:(id)arg1 ;
-(id)invocationForProtocol:(id)arg1 selector:(SEL)arg2 ;
-(NSMutableArray *)queuedEvents;
@end

