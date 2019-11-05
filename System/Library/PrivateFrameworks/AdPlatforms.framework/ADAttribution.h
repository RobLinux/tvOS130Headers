/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:42 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AdPlatforms.framework/AdPlatforms
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdPlatforms/ADAttribution_XPC.h>

@interface ADAttribution : NSObject <ADAttribution_XPC> {

	BOOL _hasCompletedResponse;
	int _numRetries;

}

@property (assign,nonatomic) BOOL hasCompletedResponse;              //@synthesize hasCompletedResponse=_hasCompletedResponse - In the implementation block
@property (assign,nonatomic) int numRetries;                         //@synthesize numRetries=_numRetries - In the implementation block
+(id)sharedInstance;
-(id)init;
-(int)numRetries;
-(void)setNumRetries:(int)arg1 ;
-(void)requestAttributionDetailsWithBlock:(/*^block*/id)arg1 ;
-(void)setStocksAdEnabled:(BOOL)arg1 ;
-(void)initiateRequestOnConnection:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(BOOL)hasCompletedResponse;
-(void)setHasCompletedResponse:(BOOL)arg1 ;
@end

