/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface MFIMAPConnectionFlagSearchRequest : NSObject {

	BOOL _isPositiveMatch;
	unsigned long long _mask;
	NSArray* _searchTerms;

}

@property (nonatomic,readonly) unsigned long long mask;              //@synthesize mask=_mask - In the implementation block
@property (nonatomic,readonly) NSArray * searchTerms;                //@synthesize searchTerms=_searchTerms - In the implementation block
@property (nonatomic,readonly) BOOL isPositiveMatch;                 //@synthesize isPositiveMatch=_isPositiveMatch - In the implementation block
+(id)requestWithMask:(unsigned long long)arg1 searchTerms:(id)arg2 positiveMatch:(BOOL)arg3 ;
-(void)dealloc;
-(unsigned long long)mask;
-(NSArray *)searchTerms;
-(BOOL)isPositiveMatch;
-(id)initWithMask:(unsigned long long)arg1 searchTerms:(id)arg2 positiveMatch:(BOOL)arg3 ;
@end

