/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <TextInput/NSCopying.h>
#import <TextInput/NSSecureCoding.h>

@class NSLocale, NSString;

@interface TISmartPunctuationOptions : NSObject <NSCopying, NSSecureCoding> {

	NSLocale* _locale;
	NSString* _leftSingleQuote;
	NSString* _rightSingleQuote;
	NSString* _apostrophe;
	NSString* _leftDoubleQuote;
	NSString* _rightDoubleQuote;

}

@property (nonatomic,copy) NSString * leftSingleQuote;               //@synthesize leftSingleQuote=_leftSingleQuote - In the implementation block
@property (nonatomic,copy) NSString * rightSingleQuote;              //@synthesize rightSingleQuote=_rightSingleQuote - In the implementation block
@property (nonatomic,copy) NSString * apostrophe;                    //@synthesize apostrophe=_apostrophe - In the implementation block
@property (nonatomic,copy) NSString * leftDoubleQuote;               //@synthesize leftDoubleQuote=_leftDoubleQuote - In the implementation block
@property (nonatomic,copy) NSString * rightDoubleQuote;              //@synthesize rightDoubleQuote=_rightDoubleQuote - In the implementation block
@property (nonatomic,readonly) NSLocale * locale;                    //@synthesize locale=_locale - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)smartPunctuationOptionsForLocale:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSLocale *)locale;
-(id)initWithLocale:(id)arg1 ;
-(NSString *)leftSingleQuote;
-(NSString *)rightSingleQuote;
-(NSString *)apostrophe;
-(NSString *)leftDoubleQuote;
-(NSString *)rightDoubleQuote;
-(void)_generateDataFromLocale;
-(void)setLeftSingleQuote:(NSString *)arg1 ;
-(void)setRightSingleQuote:(NSString *)arg1 ;
-(void)setApostrophe:(NSString *)arg1 ;
-(void)setLeftDoubleQuote:(NSString *)arg1 ;
-(void)setRightDoubleQuote:(NSString *)arg1 ;
@end

