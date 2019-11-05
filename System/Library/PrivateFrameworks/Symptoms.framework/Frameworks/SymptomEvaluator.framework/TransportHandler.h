/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:14 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
@class ReporterFilter;

@interface TransportHandler : NSObject {

	transport_connection_sRef _connection;
	unsigned long long _connectionId;
	/*function pointer*/void* _writeFn;
	unsigned _ackId;
	BOOL _readOutstanding;
	BOOL _filterUpdateOutstanding;
	BOOL _disabled;
	unsigned _reporterId;
	const char* _reporterName;
	unsigned long long _pid;
	const char* _processName;
	const char* _bundleId;
	ReporterFilter* _reporterFilter;
	int _reporterVersion;

}
+(void)initialize;
+(id)applicationStateMonitor;
+(void)updateFilters:(unsigned long long)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)disconnect;
-(void)connect:(transport_connection_sRef)arg1 id:(unsigned long long)arg2 writefn:(/*function pointer*/void*)arg3 pid:(unsigned long long)arg4 name:(char*)arg5 ;
-(void)receivePayload:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)startRead;
-(void)_sendFilterUpdate;
-(void)generateLibnetcoreSymptomSignpost:(id)arg1 ;
-(void)didReceiveEvent:(id)arg1 ;
-(void)_sendAck:(unsigned)arg1 ;
@end

