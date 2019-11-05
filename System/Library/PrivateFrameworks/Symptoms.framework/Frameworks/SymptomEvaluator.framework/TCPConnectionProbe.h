/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/TestProbe.h>

@protocol OS_tcp_connection;
@class NSObject, NSDate;

@interface TCPConnectionProbe : TestProbe {

	NSObject*<OS_tcp_connection> _connection;
	BOOL _connected;
	BOOL _shouldSendReply;
	NSDate* _startTime;
	double _elapsedTime;

}
-(void)testConection:(id)arg1 port:(unsigned long long)arg2 timeout:(double)arg3 interfaceName:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)cancelTest:(/*^block*/id)arg1 ;
@end

