/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:19 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoard/RBDomainAttributeDataProviding.h>

@class NSString, NSDictionary;

@interface RBDomainAttributeManagerDataProvider : NSObject <RBDomainAttributeDataProviding> {

	NSString* _path;
	NSDictionary* _rawTemplates;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDictionary:(id)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(id)validationErrors;
-(id)templatesByDomain;
-(id)_validatedTemplatesByDomainWithErrors:(id)arg1 ;
-(id)_templatesByDomainWithErrors:(id)arg1 ;
-(id)_validatedDomainAttributeTemplateFromDomainAttributeTemplate:(id)arg1 dependenciesByFullyQualifiedName:(id)arg2 errors:(id)arg3 ;
-(id)_templatesWithDomain:(id)arg1 fromFilename:(id)arg2 errors:(id)arg3 ;
-(id)_templatesWithDomain:(id)arg1 fromDictionary:(id)arg2 errors:(id)arg3 ;
-(BOOL)_isAttributeClassNameLegal:(id)arg1 ;
-(BOOL)_isPropertyLegalForClassName:(id)arg1 propertyName:(id)arg2 value:(id)arg3 error:(id*)arg4 ;
-(id)_attributeTemplatesFromArray:(id)arg1 forDomainAttributeWithDomain:(id)arg2 name:(id)arg3 errors:(id)arg4 ;
-(id)_entitlementsFromDictionary:(id)arg1 forDomainAttributeWithDomain:(id)arg2 name:(id)arg3 errors:(id)arg4 ;
-(id)_bundlePropertiesFromDictionary:(id)arg1 forDomainAttributeWithDomain:(id)arg2 name:(id)arg3 errors:(id)arg4 ;
-(id)_attributeTemplateGroupsFromArray:(id)arg1 forDomainAttributeWithDomain:(id)arg2 name:(id)arg3 errors:(id)arg4 ;
-(id)_templateWithDomain:(id)arg1 name:(id)arg2 dictionary:(id)arg3 errors:(id)arg4 ;
-(id)_validatedAttributeTemplateFromAttributeTemplate:(id)arg1 domainAttributeTemplate:(id)arg2 dependenciesByFullyQualifiedName:(id)arg3 errors:(id)arg4 ;
-(id)_fullyQualifiedNameForDomain:(id)arg1 andName:(id)arg2 ;
-(id)_legalPropertyNamesByClassName;
-(id)_legalClassNames;
-(id)validDomains;
@end

