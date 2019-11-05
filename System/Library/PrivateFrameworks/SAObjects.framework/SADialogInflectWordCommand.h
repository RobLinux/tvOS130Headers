/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:34 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSArray, NSString;

@interface SADialogInflectWordCommand : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSArray * constraints; 
@property (assign,nonatomic) BOOL defaultToSemantic; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSString * locale; 
@property (nonatomic,copy) NSString * semanticFeatureName; 
@property (nonatomic,copy) NSString * value; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)inflectWordCommand;
+(id)inflectWordCommandWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setLocale:(NSString *)arg1 ;
-(NSString *)locale;
-(NSString *)value;
-(NSArray *)constraints;
-(void)setValue:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setConstraints:(NSArray *)arg1 ;
-(BOOL)defaultToSemantic;
-(void)setDefaultToSemantic:(BOOL)arg1 ;
-(NSString *)semanticFeatureName;
-(void)setSemanticFeatureName:(NSString *)arg1 ;
@end

