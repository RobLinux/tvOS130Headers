/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:59 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/terminusd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <terminusd/NRAnalytics.h>

@interface NRAnalyticsKeyManager : NRAnalytics {

	BOOL _queryKeysSuccess;
	unsigned long long _queryKeysStart;
	unsigned long long _queryKeysEnd;

}

@property (assign,nonatomic) unsigned long long queryKeysStart;              //@synthesize queryKeysStart=_queryKeysStart - In the implementation block
@property (assign,nonatomic) unsigned long long queryKeysEnd;                //@synthesize queryKeysEnd=_queryKeysEnd - In the implementation block
@property (assign,nonatomic) BOOL queryKeysSuccess;                          //@synthesize queryKeysSuccess=_queryKeysSuccess - In the implementation block
-(void)submit;
-(unsigned long long)queryKeysStart;
-(void)setQueryKeysStart:(unsigned long long)arg1 ;
-(unsigned long long)queryKeysEnd;
-(void)setQueryKeysEnd:(unsigned long long)arg1 ;
-(BOOL)queryKeysSuccess;
-(void)setQueryKeysSuccess:(BOOL)arg1 ;
@end
