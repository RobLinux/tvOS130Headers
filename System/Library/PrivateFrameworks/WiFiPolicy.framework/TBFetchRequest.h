/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:06 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDictionary;


@protocol TBFetchRequest <NSObject,NSCopying>
@property (nonatomic,readonly) id<TBFetchRequestDescriptor> descriptor; 
@property (assign,nonatomic) unsigned long long sourcePolicy; 
@property (nonatomic,copy) id resultsHandler; 
@property (nonatomic,copy) id preferLocalHandler; 
@property (nonatomic,readonly) BOOL cacheable; 
@property (nonatomic,retain) NSDictionary * userInfo; 
@optional
-(NSDictionary *)userInfo;
-(void)setUserInfo:(id)arg1;
-(void)handlePreferLocalResponse:(id)arg1;

@required
-(id<TBFetchRequestDescriptor>)descriptor;
-(id)resultsHandler;
-(void)setResultsHandler:(/*^block*/id)arg1;
-(void)handleResponse:(id)arg1;
-(unsigned long long)sourcePolicy;
-(void)setSourcePolicy:(unsigned long long)arg1;
-(BOOL)cacheable;
-(id)preferLocalHandler;
-(void)setPreferLocalHandler:(/*^block*/id)arg1;

@end

