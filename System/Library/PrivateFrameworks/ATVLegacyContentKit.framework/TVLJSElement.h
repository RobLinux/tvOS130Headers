/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <ATVLegacyContentKit/TVLJSNode.h>

@class TVLXMLSchema, TVLXMLElement;

@interface TVLJSElement : TVLJSNode {

	TVLXMLSchema* xmlSchema;

}

@property (nonatomic,retain) TVLXMLSchema * xmlSchema; 
@property (nonatomic,retain,readonly) TVLXMLElement * xmlElement; 
+(void)addConstructorToObject:(OpaqueJSValueRef)arg1 inContext:(OpaqueJSContextRef)arg2 ;
+(id)elementInContext:(OpaqueJSContextRef)arg1 withElement:(id)arg2 withSchema:(id)arg3 ;
+(id)elementFromValue:(OpaqueJSValueRef)arg1 inContext:(OpaqueJSContextRef)arg2 exception:(const OpaqueJSValue*)arg3 ;
-(void)dealloc;
-(void)setXmlSchema:(TVLXMLSchema *)arg1 ;
-(TVLXMLElement *)xmlElement;
-(TVLXMLSchema *)xmlSchema;
@end

