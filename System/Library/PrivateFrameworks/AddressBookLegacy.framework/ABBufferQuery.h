/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AddressBookLegacy/AddressBookLegacy-Structs.h>
@class CNManagedConfiguration, ABSQLPredicate, NSIndexSet;

@interface ABBufferQuery : NSObject {

	BOOL _fetchLinkedContacts;
	BOOL _needsMultivalueTable;
	BOOL _needsMultivalueEntryTable;
	BOOL _needsPersonTable;
	BOOL _needsPersonLinkTable;
	BOOL _requestedImageData;
	BOOL _requestedImageCropRect;
	BOOL _requestedImageThumbnail;
	BOOL _requestedImageFullscreenData;
	BOOL _requestedSyncImageData;
	BOOL _requestedHasImageData;
	unsigned _sortOrder;
	void* _addressBook;
	CNManagedConfiguration* _managedConfiguration;
	ABSQLPredicate* _predicate;
	CPSqliteStatement* _statement;
	NSIndexSet* _scopedStoreIdentifiers;
	NSIndexSet* _requestedPropertyIdentifiers;
	NSIndexSet* _requestedMultivalueIdentifiers;
	CFDictionaryRef _propertyIndices;

}

@property (assign,nonatomic) void* addressBook;                                            //@synthesize addressBook=_addressBook - In the implementation block
@property (nonatomic,readonly) CNManagedConfiguration * managedConfiguration;              //@synthesize managedConfiguration=_managedConfiguration - In the implementation block
@property (nonatomic,readonly) ABSQLPredicate * predicate;                                 //@synthesize predicate=_predicate - In the implementation block
@property (assign,nonatomic) CPSqliteStatement* statement;                                 //@synthesize statement=_statement - In the implementation block
@property (nonatomic,readonly) unsigned sortOrder;                                         //@synthesize sortOrder=_sortOrder - In the implementation block
@property (nonatomic,readonly) NSIndexSet * scopedStoreIdentifiers;                        //@synthesize scopedStoreIdentifiers=_scopedStoreIdentifiers - In the implementation block
@property (nonatomic,readonly) NSIndexSet * requestedPropertyIdentifiers;                  //@synthesize requestedPropertyIdentifiers=_requestedPropertyIdentifiers - In the implementation block
@property (nonatomic,readonly) NSIndexSet * requestedMultivalueIdentifiers;                //@synthesize requestedMultivalueIdentifiers=_requestedMultivalueIdentifiers - In the implementation block
@property (assign,nonatomic) CFDictionaryRef propertyIndices;                              //@synthesize propertyIndices=_propertyIndices - In the implementation block
@property (nonatomic,readonly) BOOL fetchLinkedContacts;                                   //@synthesize fetchLinkedContacts=_fetchLinkedContacts - In the implementation block
@property (nonatomic,readonly) BOOL needsMultivalueTable;                                  //@synthesize needsMultivalueTable=_needsMultivalueTable - In the implementation block
@property (nonatomic,readonly) BOOL needsMultivalueEntryTable;                             //@synthesize needsMultivalueEntryTable=_needsMultivalueEntryTable - In the implementation block
@property (nonatomic,readonly) BOOL needsPersonTable;                                      //@synthesize needsPersonTable=_needsPersonTable - In the implementation block
@property (nonatomic,readonly) BOOL needsPersonLinkTable;                                  //@synthesize needsPersonLinkTable=_needsPersonLinkTable - In the implementation block
@property (nonatomic,readonly) BOOL requestedImageData;                                    //@synthesize requestedImageData=_requestedImageData - In the implementation block
@property (nonatomic,readonly) BOOL requestedImageCropRect;                                //@synthesize requestedImageCropRect=_requestedImageCropRect - In the implementation block
@property (nonatomic,readonly) BOOL requestedImageThumbnail;                               //@synthesize requestedImageThumbnail=_requestedImageThumbnail - In the implementation block
@property (nonatomic,readonly) BOOL requestedImageFullscreenData;                          //@synthesize requestedImageFullscreenData=_requestedImageFullscreenData - In the implementation block
@property (nonatomic,readonly) BOOL requestedSyncImageData;                                //@synthesize requestedSyncImageData=_requestedSyncImageData - In the implementation block
@property (nonatomic,readonly) BOOL requestedHasImageData;                                 //@synthesize requestedHasImageData=_requestedHasImageData - In the implementation block
-(void)dealloc;
-(ABSQLPredicate *)predicate;
-(unsigned)sortOrder;
-(void*)addressBook;
-(void)setAddressBook:(void*)arg1 ;
-(void)_initSetupPropertySet:(CFSetRef)arg1 includeLinkedContacts:(BOOL)arg2 ;
-(id)scopedStoresForManagedConfiguration:(id)arg1 ;
-(void)prependWithClauseToQueryString:(id)arg1 whereClause:(id)arg2 ;
-(void)appendCustomPropertySelectsToQueryString:(id)arg1 ;
-(void)appendFromClauseToQueryString:(id)arg1 ;
-(void)appendWhereClauseToQueryString:(id)arg1 ;
-(void)appendOrderByClauseToQueryString:(id)arg1 ;
-(void)bindWithClause:(id)arg1 ;
-(void)bindWhereClause:(id)arg1 ;
-(NSIndexSet *)requestedPropertyIdentifiers;
-(NSIndexSet *)requestedMultivalueIdentifiers;
-(BOOL)needsMultivalueEntryTable;
-(BOOL)fetchLinkedContacts;
-(NSIndexSet *)scopedStoreIdentifiers;
-(void)appendBindParameterMarkersToQueryString:(id)arg1 count:(unsigned long long)arg2 ;
-(BOOL)needsPersonLinkTable;
-(BOOL)needsMultivalueTable;
-(id)initWithAddressBook:(void*)arg1 predicate:(id)arg2 requestedProperties:(CFSetRef)arg3 includeLinkedContacts:(BOOL)arg4 sortOrder:(unsigned)arg5 managedConfiguration:(id)arg6 ;
-(void)setPropertyIndices:(CFDictionaryRef)arg1 ;
-(CNManagedConfiguration *)managedConfiguration;
-(CPSqliteStatement*)statement;
-(void)setStatement:(CPSqliteStatement*)arg1 ;
-(CFDictionaryRef)propertyIndices;
-(BOOL)needsPersonTable;
-(BOOL)requestedImageData;
-(BOOL)requestedImageCropRect;
-(BOOL)requestedImageThumbnail;
-(BOOL)requestedImageFullscreenData;
-(BOOL)requestedSyncImageData;
-(BOOL)requestedHasImageData;
@end

