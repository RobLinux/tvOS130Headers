/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Contacts/Contacts-Structs.h>
@interface CNiOSABConversions : NSObject
+(void)initialize;
+(id)os_log;
+(id)contactMatchInfoFromABMatchMetadataDictionary:(id)arg1 ;
+(const CFSetRef)requiredABPropertyIDSetForKeysToFetch:(id)arg1 ;
+(/*^block*/id)personToContactTransformWithKeysToFetch:(id)arg1 mutable:(BOOL)arg2 ;
+(id)contactPropertiesByABPropertyID;
+(id)stringFromABBytes:(char*)arg1 length:(unsigned long long)arg2 ;
+(id)dateFromABBytes:(char*)arg1 length:(unsigned long long)arg2 ;
+(id)dataFromABBytes:(char*)arg1 length:(unsigned long long)arg2 ;
+(id)numberFromIntegerABBytes:(char*)arg1 length:(unsigned long long)arg2 ;
+(id)contactFromABPerson:(void*)arg1 keysToConvert:(id)arg2 mutable:(BOOL)arg3 ;
+(id)containersFromABSources:(CFArrayRef)arg1 remote:(BOOL)arg2 includeDisabledSources:(BOOL)arg3 ;
+(id)accountsFromABAccounts:(CFArrayRef)arg1 ;
+(id)groupsFromABGroups:(CFArrayRef)arg1 ;
+(id)contactIdentifierFromABPerson:(void*)arg1 ;
+(id)contactFromABPerson:(void*)arg1 uniqueKeysToConvert:(id)arg2 mutable:(BOOL)arg3 ;
+(void)updateContact:(id)arg1 fromABPerson:(void*)arg2 keysToConvert:(id)arg3 availableKeyDescriptor:(id*)arg4 ;
+(id)groupFromABGroup:(void*)arg1 ;
+(id)arrayByMappingTransform:(/*^block*/id)arg1 onCFArray:(CFArrayRef)arg2 ;
+(id)containerFromABSource:(void*)arg1 remote:(BOOL)arg2 includeDisabledSources:(BOOL)arg3 ;
+(id)accountFromABAccount:(void*)arg1 ;
@end

