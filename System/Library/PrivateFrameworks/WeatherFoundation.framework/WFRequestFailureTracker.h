/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WFRequestFailureTracker : NSObject {

	unsigned long long _requestFailures;
	unsigned long long _requestSuccesses;

}

@property (nonatomic,readonly) unsigned long long requestFailures;               //@synthesize requestFailures=_requestFailures - In the implementation block
@property (nonatomic,readonly) unsigned long long requestSuccesses;              //@synthesize requestSuccesses=_requestSuccesses - In the implementation block
-(void)incrementFailCount;
-(void)incrementSuccessCount;
-(double)failureRate;
-(unsigned long long)requestFailures;
-(unsigned long long)requestSuccesses;
@end

