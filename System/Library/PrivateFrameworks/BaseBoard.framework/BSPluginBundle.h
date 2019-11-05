/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:16 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSBundle;

@interface BSPluginBundle : NSObject {

	NSString* _identifier;
	NSBundle* _bundle;
	NSString* _name;
	NSString* _type;
	NSString* _specifiedClassName;
	NSString* _requiredClassOrProtocolName;
	Class _principalClass;

}

@property (nonatomic,readonly) NSBundle * bundle;                               //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,copy) NSString * specifiedClassName;                       //@synthesize specifiedClassName=_specifiedClassName - In the implementation block
@property (nonatomic,copy) NSString * requiredClassOrProtocolName;              //@synthesize requiredClassOrProtocolName=_requiredClassOrProtocolName - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,copy,readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                            //@synthesize type=_type - In the implementation block
@property (getter=isLoaded,nonatomic,readonly) BOOL loaded; 
@property (nonatomic,readonly) Class principalClass;                            //@synthesize principalClass=_principalClass - In the implementation block
+(id)bundleWithPath:(id)arg1 availableSpecifications:(id)arg2 ;
-(NSString *)name;
-(id)description;
-(NSString *)type;
-(BOOL)isValid;
-(NSString *)identifier;
-(BOOL)isLoaded;
-(Class)principalClass;
-(id)initWithBundle:(id)arg1 ;
-(NSBundle *)bundle;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(NSString *)requiredClassOrProtocolName;
-(void)setRequiredClassOrProtocolName:(NSString *)arg1 ;
-(BOOL)loadPlugin:(/*^block*/id)arg1 ;
-(BOOL)loadPlugin;
-(NSString *)specifiedClassName;
-(void)setSpecifiedClassName:(NSString *)arg1 ;
@end

