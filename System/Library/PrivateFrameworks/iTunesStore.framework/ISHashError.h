/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:19 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/iTunesStore-Structs.h>
#import <iTunesStore/NSCopying.h>

@class NSString;

@interface ISHashError : NSObject <NSCopying> {

	NSString* _actualHashString;
	NSString* _expectedHashString;
	long long _rangeEnd;
	long long _rangeStart;

}

@property (nonatomic,copy) NSString * actualHashString;                         //@synthesize actualHashString=_actualHashString - In the implementation block
@property (nonatomic,copy) NSString * expectedHashString;                       //@synthesize expectedHashString=_expectedHashString - In the implementation block
@property (assign,nonatomic) long long rangeEnd;                                //@synthesize rangeEnd=_rangeEnd - In the implementation block
@property (assign,nonatomic) long long rangeStart;                              //@synthesize rangeStart=_rangeStart - In the implementation block
@property (nonatomic,readonly) NSString * hashFailureHeaderString; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)setActualHashString:(NSString *)arg1 ;
-(void)setExpectedHashString:(NSString *)arg1 ;
-(void)setRangeEnd:(long long)arg1 ;
-(void)setRangeStart:(long long)arg1 ;
-(NSString *)hashFailureHeaderString;
-(NSString *)actualHashString;
-(NSString *)expectedHashString;
-(long long)rangeEnd;
-(long long)rangeStart;
@end

