/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNPredicate.h>
#import <Contacts/CNiOSContactPredicate.h>

@class NSArray, NSString;

@interface CNiOSABPreferredNameInContainersAndGroupsPredicate : CNPredicate <CNiOSContactPredicate> {

	NSArray* _containerIdentifiers;
	NSArray* _groupIdentifiers;

}

@property (nonatomic,copy,readonly) NSArray * containerIdentifiers;              //@synthesize containerIdentifiers=_containerIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) NSArray * groupIdentifiers;                  //@synthesize groupIdentifiers=_groupIdentifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CFArrayRef)cn_copyPeopleInAddressBook:(void*)arg1 fetchRequest:(id)arg2 matchInfos:(id*)arg3 environment:(id)arg4 error:(_CFError*)arg5 ;
-(BOOL)cn_supportsNativeSorting;
-(BOOL)cn_supportsNativeBatchFetch;
-(BOOL)cn_supportsEncodedFetching;
-(id)cn_cursorForEncodedPeopleFromAddressBook:(void*)arg1 fetchRequest:(id)arg2 environment:(id)arg3 error:(id*)arg4 ;
-(NSArray *)containerIdentifiers;
-(NSArray *)groupIdentifiers;
-(id)initWithContainerIdentifiers:(id)arg1 groupIdentifiers:(id)arg2 ;
@end

