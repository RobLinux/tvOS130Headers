/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:07 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiPolicy/TBFetchResponse.h>

@class NSArray, NSSet, NSError, NSString, NSDictionary;

@interface TBErrorFetchResponse : NSObject <TBFetchResponse> {

	NSArray* results;
	NSSet* tiles;
	NSError* _error;

}

@property (nonatomic,copy) NSError * error;                                //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * results; 
@property (nonatomic,readonly) NSSet * tiles; 
@property (nonatomic,readonly) NSDictionary * resultsByBSSID; 
+(id)responseWithError:(id)arg1 ;
+(id)remoteResponseWithError:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSArray *)results;
-(id)initWithError:(id)arg1 ;
-(NSSet *)tiles;
@end

