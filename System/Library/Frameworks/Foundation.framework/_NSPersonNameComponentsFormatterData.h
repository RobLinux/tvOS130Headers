/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:41 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSCopying.h>
#import <Foundation/NSSecureCoding.h>

@class NSLocale, NPNameParser;

@interface _NSPersonNameComponentsFormatterData : NSObject <NSCopying, NSSecureCoding> {

	long long _style;
	BOOL _phonetic;
	BOOL _forceFamilyNameFirst;
	BOOL _forceGivenNameFirst;
	BOOL _ignoresFallbacks;
	NSLocale* _locale;
	NPNameParser* _nameParser;

}

@property (assign) long long style;                        //@synthesize style=_style - In the implementation block
@property (assign) BOOL phonetic;                          //@synthesize phonetic=_phonetic - In the implementation block
@property (assign) BOOL forceFamilyNameFirst;              //@synthesize forceFamilyNameFirst=_forceFamilyNameFirst - In the implementation block
@property (assign) BOOL forceGivenNameFirst;               //@synthesize forceGivenNameFirst=_forceGivenNameFirst - In the implementation block
@property (assign) BOOL ignoresFallbacks;                  //@synthesize ignoresFallbacks=_ignoresFallbacks - In the implementation block
@property (copy) NSLocale * locale;                        //@synthesize locale=_locale - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(BOOL)isEqualToFormatterData:(id)arg1 ;
-(BOOL)phonetic;
-(BOOL)forceFamilyNameFirst;
-(BOOL)forceGivenNameFirst;
-(BOOL)ignoresFallbacks;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(void)setPhonetic:(BOOL)arg1 ;
-(void)setForceFamilyNameFirst:(BOOL)arg1 ;
-(void)setForceGivenNameFirst:(BOOL)arg1 ;
-(void)setIgnoresFallbacks:(BOOL)arg1 ;
@end

