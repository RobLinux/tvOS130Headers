/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:08 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;
@class NSObject;

@interface SDDirtyIdleTimer : NSObject {

	unsigned _resetCount;
	unsigned _dirtyCount;
	unsigned long long _idleTimeout;
	unsigned long long _dirtyTimeout;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _block;
	NSObject*<OS_dispatch_source> _idleTimer;
	unsigned long long _idleStartTime;
	NSObject*<OS_os_transaction> _transaction;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                    //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id block;                                                //@synthesize block=_block - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> idleTimer;               //@synthesize idleTimer=_idleTimer - In the implementation block
@property (assign,nonatomic) unsigned long long idleStartTime;                      //@synthesize idleStartTime=_idleStartTime - In the implementation block
@property (assign,nonatomic) unsigned resetCount;                                   //@synthesize resetCount=_resetCount - In the implementation block
@property (assign,nonatomic) unsigned dirtyCount;                                   //@synthesize dirtyCount=_dirtyCount - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_transaction> transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (assign,nonatomic) unsigned long long idleTimeout;                        //@synthesize idleTimeout=_idleTimeout - In the implementation block
@property (assign,nonatomic) unsigned long long dirtyTimeout;                       //@synthesize dirtyTimeout=_dirtyTimeout - In the implementation block
-(id)description;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)cancel;
-(id)block;
-(NSObject*<OS_os_transaction>)transaction;
-(void)setBlock:(id)arg1 ;
-(void)setTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(void)_stop;
-(void)dirty;
-(void)setIdleTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)idleTimer;
-(unsigned long long)idleTimeout;
-(id)initWithQueue:(id)arg1 timeoutBlock:(/*^block*/id)arg2 ;
-(void)setIdleTimeout:(unsigned long long)arg1 ;
-(unsigned long long)dirtyTimeout;
-(void)setDirtyTimeout:(unsigned long long)arg1 ;
-(unsigned long long)idleStartTime;
-(void)setIdleStartTime:(unsigned long long)arg1 ;
-(unsigned)resetCount;
-(void)setResetCount:(unsigned)arg1 ;
-(unsigned)dirtyCount;
-(void)setDirtyCount:(unsigned)arg1 ;
@end

