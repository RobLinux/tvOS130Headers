/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INCodableAttributeMetadata.h>

@class INCodableEnumValue;

@interface INCodableEnumAttributeMetadata : INCodableAttributeMetadata {

	INCodableEnumValue* _defaultValue;

}

@property (nonatomic,retain) INCodableEnumValue * defaultValue;              //@synthesize defaultValue=_defaultValue - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDefaultValue:(INCodableEnumValue *)arg1 ;
-(INCodableEnumValue *)defaultValue;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationForLanguage:(id)arg1 ;
@end

