/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <AssistantServices/AFApplicationContextMutating.h>

@class AFApplicationContext, NSString, AFBulletin, AceObject, NSDictionary;

@interface _AFApplicationContextMutation : NSObject <AFApplicationContextMutating> {

	AFApplicationContext* _baseModel;
	NSString* _associatedBundleIdentifier;
	AFBulletin* _bulletin;
	AceObject* _aceContext;
	NSDictionary* _contextDictionary;
	struct {
		unsigned isDirty : 1;
		unsigned hasAssociatedBundleIdentifier : 1;
		unsigned hasBulletin : 1;
		unsigned hasAceContext : 1;
		unsigned hasContextDictionary : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)generate;
-(id)initWithBaseModel:(id)arg1 ;
-(void)setBulletin:(id)arg1 ;
-(void)setAssociatedBundleIdentifier:(id)arg1 ;
-(void)setAceContext:(id)arg1 ;
-(void)setContextDictionary:(id)arg1 ;
@end

