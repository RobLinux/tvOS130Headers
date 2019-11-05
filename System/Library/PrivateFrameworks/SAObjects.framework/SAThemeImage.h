/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:26 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSData;

@interface SAThemeImage : SADomainObject

@property (nonatomic,copy) NSString * appearanceSetting; 
@property (nonatomic,copy) NSData * dynamicImage; 
+(id)themeImage;
+(id)themeImageWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)appearanceSetting;
-(void)setAppearanceSetting:(NSString *)arg1 ;
-(NSData *)dynamicImage;
-(void)setDynamicImage:(NSData *)arg1 ;
@end

