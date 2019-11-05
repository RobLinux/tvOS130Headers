/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFTextColumnSection.h>
@class NSArray, NSDictionary, NSData;


@protocol SFTextColumnSection <NSObject>
@property (nonatomic,copy) NSArray * textLines; 
@property (assign,nonatomic) BOOL textNoWrap; 
@property (assign,nonatomic) unsigned long long textWeight; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSDictionary *)dictionaryRepresentation;
-(NSData *)jsonData;
-(NSArray *)textLines;
-(void)setTextLines:(id)arg1;
-(BOOL)textNoWrap;
-(void)setTextNoWrap:(BOOL)arg1;
-(unsigned long long)textWeight;
-(void)setTextWeight:(unsigned long long)arg1;

@end

#import <SearchFoundation/NSSecureCoding.h>
#import <SearchFoundation/NSCopying.h>

@class NSArray, NSDictionary, NSData, NSString;

@interface SFTextColumnSection : NSObject <SFTextColumnSection, NSSecureCoding, NSCopying> {

	SCD_Struct_SF10 _has;
	BOOL _textNoWrap;
	NSArray* _textLines;
	unsigned long long _textWeight;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * textLines;                                      //@synthesize textLines=_textLines - In the implementation block
@property (assign,nonatomic) BOOL textNoWrap;                                        //@synthesize textNoWrap=_textNoWrap - In the implementation block
@property (assign,nonatomic) unsigned long long textWeight;                          //@synthesize textWeight=_textWeight - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(id)initWithProtobuf:(id)arg1 ;
-(NSData *)jsonData;
-(NSArray *)textLines;
-(void)setTextLines:(NSArray *)arg1 ;
-(BOOL)textNoWrap;
-(void)setTextNoWrap:(BOOL)arg1 ;
-(unsigned long long)textWeight;
-(void)setTextWeight:(unsigned long long)arg1 ;
-(BOOL)hasTextNoWrap;
-(BOOL)hasTextWeight;
@end

