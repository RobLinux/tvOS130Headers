/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAHAAttributeValue : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * units; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)attributeValue;
+(id)attributeValueWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)shortDescription;
-(id)groupIdentifier;
-(NSString *)units;
-(void)setUnits:(NSString *)arg1 ;
-(id)encodedClassName;
@end

