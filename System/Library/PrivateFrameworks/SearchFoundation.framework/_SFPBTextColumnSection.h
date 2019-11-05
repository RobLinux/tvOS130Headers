/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:42 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <SearchFoundation/_SFPBTextColumnSection.h>
@class NSArray, NSData;


@protocol _SFPBTextColumnSection <NSObject>
@property (nonatomic,copy) NSArray * textLines; 
@property (assign,nonatomic) BOOL textNoWrap; 
@property (assign,nonatomic) unsigned textWeight; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(NSData *)jsonData;
-(NSArray *)textLines;
-(void)setTextLines:(id)arg1;
-(BOOL)textNoWrap;
-(void)setTextNoWrap:(BOOL)arg1;
-(unsigned)textWeight;
-(void)setTextWeight:(unsigned)arg1;
-(id)initWithJSON:(id)arg1;
-(void)addTextLines:(id)arg1;
-(void)clearTextLines;
-(unsigned long long)textLinesCount;
-(id)textLinesAtIndex:(unsigned long long)arg1;

@end

#import <SearchFoundation/NSSecureCoding.h>

@class NSArray, NSData, NSString;

@interface _SFPBTextColumnSection : PBCodable <_SFPBTextColumnSection, NSSecureCoding> {

	BOOL _textNoWrap;
	unsigned _textWeight;
	NSArray* _textLines;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * textLines;                     //@synthesize textLines=_textLines - In the implementation block
@property (assign,nonatomic) BOOL textNoWrap;                       //@synthesize textNoWrap=_textNoWrap - In the implementation block
@property (assign,nonatomic) unsigned textWeight;                   //@synthesize textWeight=_textWeight - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithFacade:(id)arg1 ;
-(NSArray *)textLines;
-(void)setTextLines:(NSArray *)arg1 ;
-(BOOL)textNoWrap;
-(void)setTextNoWrap:(BOOL)arg1 ;
-(unsigned)textWeight;
-(void)setTextWeight:(unsigned)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)addTextLines:(id)arg1 ;
-(void)clearTextLines;
-(unsigned long long)textLinesCount;
-(id)textLinesAtIndex:(unsigned long long)arg1 ;
@end

