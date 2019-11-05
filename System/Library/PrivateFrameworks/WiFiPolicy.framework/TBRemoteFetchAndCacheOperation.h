/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:07 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol TBFetchResponse, TBFetchRequest;
@class NSDate, TBRemoteFetchAndCacheDataSource;

@interface TBRemoteFetchAndCacheOperation : NSOperation {

	BOOL _finished;
	NSDate* _start;
	id<TBFetchResponse> _response;
	id<TBFetchRequest> _fetchRequest;
	TBRemoteFetchAndCacheDataSource* _dataSource;

}

@property (nonatomic,retain) id<TBFetchRequest> fetchRequest;                           //@synthesize fetchRequest=_fetchRequest - In the implementation block
@property (nonatomic,retain) id<TBFetchResponse> response;                              //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) TBRemoteFetchAndCacheDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(id)name;
-(id<TBFetchResponse>)response;
-(void)setResponse:(id<TBFetchResponse>)arg1 ;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isReady;
-(void)finish;
-(id<TBFetchRequest>)fetchRequest;
-(void)setFetchRequest:(id<TBFetchRequest>)arg1 ;
-(TBRemoteFetchAndCacheDataSource *)dataSource;
-(void)setDataSource:(TBRemoteFetchAndCacheDataSource *)arg1 ;
-(id)initWithFetchRequest:(id)arg1 dataSource:(id)arg2 ;
@end

