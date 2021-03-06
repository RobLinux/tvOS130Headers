/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:41 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSUnit.h>
#import <Foundation/NSSecureCoding.h>

@class NSUnitConverter;

@interface NSDimension : NSUnit <NSSecureCoding> {

	unsigned long long _reserved;
	NSUnitConverter* _converter;

}

@property (readonly) unsigned long long specifier;                  //@synthesize reserved=_reserved - In the implementation block
@property (copy,readonly) NSUnitConverter * converter;              //@synthesize converter=_converter - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)baseUnit;
+(id)_measurementWithNaturalScale:(id)arg1 system:(unsigned long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)specifier;
-(NSUnitConverter *)converter;
-(id)dimension;
-(id)initWithSpecifier:(unsigned long long)arg1 symbol:(id)arg2 converter:(id)arg3 ;
-(id)initWithSymbol:(id)arg1 converter:(id)arg2 ;
@end

