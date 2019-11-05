/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:14 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreParsec/PARRequest.h>
#import <CoreParsec/NSSecureCoding.h>

@class NSString, NSDictionary, NSArray, SFSearchSuggestion;

@interface PARSearchRequest : PARRequest <NSSecureCoding> {

	NSString* _queryString;
	NSDictionary* _topics;
	NSString* _l2version;
	NSString* _l3version;
	NSArray* _localContextualSuggestions;
	SFSearchSuggestion* _engagedSuggestion;
	NSArray* _completionCacheSuggestions;

}

@property (nonatomic,copy) NSString * queryString;                                //@synthesize queryString=_queryString - In the implementation block
@property (nonatomic,retain) SFSearchSuggestion * engagedSuggestion;              //@synthesize engagedSuggestion=_engagedSuggestion - In the implementation block
@property (nonatomic,retain) NSArray * completionCacheSuggestions;                //@synthesize completionCacheSuggestions=_completionCacheSuggestions - In the implementation block
@property (nonatomic,copy) NSDictionary * topics;                                 //@synthesize topics=_topics - In the implementation block
@property (nonatomic,copy) NSString * l2version;                                  //@synthesize l2version=_l2version - In the implementation block
@property (nonatomic,copy) NSString * l3version;                                  //@synthesize l3version=_l3version - In the implementation block
@property (nonatomic,copy) NSArray * localContextualSuggestions;                  //@synthesize localContextualSuggestions=_localContextualSuggestions - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)nwActivityLabel;
-(NSString *)queryString;
-(void)setQueryString:(NSString *)arg1 ;
-(NSDictionary *)topics;
-(void)setTopics:(NSDictionary *)arg1 ;
-(void)setEngagedSuggestion:(SFSearchSuggestion *)arg1 ;
-(NSString *)l2version;
-(void)setL2version:(NSString *)arg1 ;
-(NSString *)l3version;
-(void)setL3version:(NSString *)arg1 ;
-(NSArray *)localContextualSuggestions;
-(void)setLocalContextualSuggestions:(NSArray *)arg1 ;
-(SFSearchSuggestion *)engagedSuggestion;
-(NSArray *)completionCacheSuggestions;
-(void)setCompletionCacheSuggestions:(NSArray *)arg1 ;
@end
