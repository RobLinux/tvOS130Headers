/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFText.h>
#import <SearchFoundation/SFRichText.h>
@class NSString, NSArray, NSDictionary, NSData;


@protocol SFRichText <SFText>
@property (assign,nonatomic) double starRating; 
@property (nonatomic,copy) NSString * contentAdvisory; 
@property (nonatomic,copy) NSArray * icons; 
@property (nonatomic,copy) NSArray * formattedTextPieces; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSDictionary *)dictionaryRepresentation;
-(NSArray *)icons;
-(void)setIcons:(id)arg1;
-(void)setFormattedTextPieces:(id)arg1;
-(NSData *)jsonData;
-(NSString *)contentAdvisory;
-(void)setContentAdvisory:(id)arg1;
-(double)starRating;
-(void)setStarRating:(double)arg1;
-(NSArray *)formattedTextPieces;

@end

#import <SearchFoundation/NSSecureCoding.h>
#import <SearchFoundation/NSCopying.h>

@class NSString, NSArray, NSDictionary, NSData;

@interface SFRichText : SFText <SFRichText, NSSecureCoding, NSCopying> {

	SCD_Struct_SF2 _has;
	double _starRating;
	NSString* _contentAdvisory;
	NSArray* _icons;
	NSArray* _formattedTextPieces;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSString * text; 
@property (assign,nonatomic) unsigned long long maxLines; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (assign,nonatomic) double starRating;                                      //@synthesize starRating=_starRating - In the implementation block
@property (nonatomic,copy) NSString * contentAdvisory;                               //@synthesize contentAdvisory=_contentAdvisory - In the implementation block
@property (nonatomic,copy) NSArray * icons;                                          //@synthesize icons=_icons - In the implementation block
@property (nonatomic,copy) NSArray * formattedTextPieces;                            //@synthesize formattedTextPieces=_formattedTextPieces - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(NSArray *)icons;
-(void)setIcons:(NSArray *)arg1 ;
-(void)setFormattedTextPieces:(NSArray *)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(NSData *)jsonData;
-(NSString *)contentAdvisory;
-(void)setContentAdvisory:(NSString *)arg1 ;
-(double)starRating;
-(void)setStarRating:(double)arg1 ;
-(NSArray *)formattedTextPieces;
-(BOOL)hasStarRating;
-(void)loadRichTextWithCompletionHandler:(/*^block*/id)arg1 ;
@end

