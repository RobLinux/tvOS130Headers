/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:34 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/demod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <demod/NSXPCListenerDelegate.h>
#import <demod/MSDSendTestCommand.h>

@protocol OS_dispatch_queue;
@class NSXPCListener, NSObject, NSXPCConnection, NSXPCInterface, NSString;

@interface MSDTestInterface : NSObject <NSXPCListenerDelegate, MSDSendTestCommand> {

	NSXPCListener* _xpcListener;
	NSObject*<OS_dispatch_queue> _testQueue;
	NSXPCConnection* _xpcConnection;
	NSXPCInterface* _xpcInterface;
	unsigned long long _defaultLogLevel;

}

@property (retain) NSXPCListener * xpcListener;                                   //@synthesize xpcListener=_xpcListener - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> testQueue;              //@synthesize testQueue=_testQueue - In the implementation block
@property (retain) NSXPCConnection * xpcConnection;                               //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (retain) NSXPCInterface * xpcInterface;                                 //@synthesize xpcInterface=_xpcInterface - In the implementation block
@property (assign) unsigned long long defaultLogLevel;                            //@synthesize defaultLogLevel=_defaultLogLevel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)start;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(NSXPCListener *)xpcListener;
-(void)setXpcListener:(NSXPCListener *)arg1 ;
-(NSXPCInterface *)xpcInterface;
-(unsigned long long)defaultLogLevel;
-(void)setTestQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDefaultLogLevel:(unsigned long long)arg1 ;
-(void)sendTestEvents:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)testQueue;
-(void)pushTestLog:(id)arg1 ;
-(void)sendCommandsToDemod:(id)arg1 replyFromDemod:(/*^block*/id)arg2 ;
-(id)sanitizeTestLog:(id)arg1 ;
-(id)getTimeStamp;
-(void)pushTestEvent:(id)arg1 ofType:(id)arg2 ;
-(void)setXpcInterface:(NSXPCInterface *)arg1 ;
@end

