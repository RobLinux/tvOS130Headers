/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:57 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLSession;

@interface SATVNetworkReachability : NSObject {

	NSURLSession* _urlSession;

}

@property (nonatomic,retain) NSURLSession * urlSession;              //@synthesize urlSession=_urlSession - In the implementation block
-(id)init;
-(void)dealloc;
-(NSURLSession *)urlSession;
-(void)setUrlSession:(NSURLSession *)arg1 ;
-(void)_performReachabilityRequestWithRetryCount:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)testReachabilityWithCompletion:(/*^block*/id)arg1 ;
@end

