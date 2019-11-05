/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IDSXPCConnection;

@interface IDSXPCConnectionTimeoutProxy : NSObject {

	id _target;
	IDSXPCConnection* _connection;
	double _timeout;
	/*^block*/id _errorHandler;

}

@property (nonatomic,retain) id target;                                  //@synthesize target=_target - In the implementation block
@property (nonatomic,retain) IDSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) double timeout;                             //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,copy) id errorHandler;                              //@synthesize errorHandler=_errorHandler - In the implementation block
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)dealloc;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)setTimeout:(double)arg1 ;
-(void)setConnection:(IDSXPCConnection *)arg1 ;
-(IDSXPCConnection *)connection;
-(double)timeout;
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(id)initWithTarget:(id)arg1 connection:(id)arg2 timeoutInSeconds:(double)arg3 errorHandler:(/*^block*/id)arg4 ;
-(BOOL)_invocationHasBlock:(id)arg1 ;
@end

