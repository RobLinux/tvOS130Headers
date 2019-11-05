/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:01 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, CoreDAVResourceTypeItem, NSString, NSSet, NSDictionary, CoreDAVSupportedReportSetItem;

@interface CoreDAVContainer : NSObject {

	BOOL _isUnauthenticated;
	NSURL* _url;
	CoreDAVResourceTypeItem* _resourceType;
	NSString* _containerTitle;
	NSSet* _privileges;
	NSString* _pushKey;
	NSDictionary* _pushTransports;
	NSURL* _resourceID;
	CoreDAVSupportedReportSetItem* _supportedReportSetItem;
	NSString* _quotaAvailable;
	NSString* _quotaUsed;
	NSURL* _owner;
	NSURL* _addMemberURL;
	NSDictionary* _bulkRequests;
	NSString* _syncToken;

}

@property (nonatomic,retain) CoreDAVSupportedReportSetItem * supportedReportSetItem;              //@synthesize supportedReportSetItem=_supportedReportSetItem - In the implementation block
@property (nonatomic,retain) NSURL * url;                                                         //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) BOOL isUnauthenticated;                                              //@synthesize isUnauthenticated=_isUnauthenticated - In the implementation block
@property (nonatomic,retain) CoreDAVResourceTypeItem * resourceType;                              //@synthesize resourceType=_resourceType - In the implementation block
@property (nonatomic,retain) NSString * containerTitle;                                           //@synthesize containerTitle=_containerTitle - In the implementation block
@property (nonatomic,retain) NSSet * privileges;                                                  //@synthesize privileges=_privileges - In the implementation block
@property (nonatomic,retain) NSString * pushKey;                                                  //@synthesize pushKey=_pushKey - In the implementation block
@property (nonatomic,retain) NSDictionary * pushTransports;                                       //@synthesize pushTransports=_pushTransports - In the implementation block
@property (nonatomic,retain) NSURL * resourceID;                                                  //@synthesize resourceID=_resourceID - In the implementation block
@property (nonatomic,retain) NSString * quotaAvailable;                                           //@synthesize quotaAvailable=_quotaAvailable - In the implementation block
@property (nonatomic,retain) NSString * quotaUsed;                                                //@synthesize quotaUsed=_quotaUsed - In the implementation block
@property (nonatomic,readonly) NSSet * supportedReports; 
@property (nonatomic,retain) NSURL * owner;                                                       //@synthesize owner=_owner - In the implementation block
@property (nonatomic,retain) NSURL * addMemberURL;                                                //@synthesize addMemberURL=_addMemberURL - In the implementation block
@property (nonatomic,retain) NSDictionary * bulkRequests;                                         //@synthesize bulkRequests=_bulkRequests - In the implementation block
@property (nonatomic,retain) NSString * syncToken;                                                //@synthesize syncToken=_syncToken - In the implementation block
@property (nonatomic,readonly) NSSet * resourceTypeAsStringSet; 
@property (nonatomic,readonly) BOOL isPrincipal; 
@property (nonatomic,readonly) NSSet * privilegesAsStringSet; 
@property (nonatomic,readonly) BOOL hasReadPrivileges; 
@property (nonatomic,readonly) BOOL hasWriteContentPrivileges; 
@property (nonatomic,readonly) BOOL hasWritePropertiesPrivileges; 
@property (nonatomic,readonly) BOOL hasBindPrivileges; 
@property (nonatomic,readonly) BOOL hasUnbindPrivileges; 
@property (nonatomic,readonly) NSSet * supportedReportsAsStringSet; 
@property (nonatomic,readonly) BOOL supportsPrincipalPropertySearchReport; 
@property (nonatomic,readonly) BOOL supportsSyncCollectionReport; 
+(id)copyPropertyMappingsForParser;
+(id)convertPushTransportsForNSServerNotificationCenter:(id)arg1 ;
-(id)description;
-(void)setOwner:(NSURL *)arg1 ;
-(NSURL *)url;
-(NSURL *)resourceID;
-(void)setUrl:(NSURL *)arg1 ;
-(CoreDAVResourceTypeItem *)resourceType;
-(void)setResourceType:(CoreDAVResourceTypeItem *)arg1 ;
-(void)setContainerTitle:(NSString *)arg1 ;
-(NSString *)containerTitle;
-(NSURL *)owner;
-(NSString *)quotaAvailable;
-(void)setQuotaAvailable:(NSString *)arg1 ;
-(id)initWithURL:(id)arg1 andProperties:(id)arg2 ;
-(void)applyParsedProperties:(id)arg1 ;
-(BOOL)isUnauthenticated;
-(NSSet *)privilegesAsStringSet;
-(NSString *)pushKey;
-(NSString *)quotaUsed;
-(NSSet *)supportedReportsAsStringSet;
-(NSDictionary *)pushTransports;
-(NSDictionary *)bulkRequests;
-(NSString *)syncToken;
-(void)setIsUnauthenticated:(BOOL)arg1 ;
-(NSSet *)privileges;
-(void)setPrivileges:(NSSet *)arg1 ;
-(void)setPushKey:(NSString *)arg1 ;
-(void)setResourceID:(NSURL *)arg1 ;
-(void)setQuotaUsed:(NSString *)arg1 ;
-(void)setSupportedReportSetItem:(CoreDAVSupportedReportSetItem *)arg1 ;
-(void)setAddMemberURL:(NSURL *)arg1 ;
-(void)setPushTransports:(NSDictionary *)arg1 ;
-(void)setBulkRequests:(NSDictionary *)arg1 ;
-(void)setSyncToken:(NSString *)arg1 ;
-(CoreDAVSupportedReportSetItem *)supportedReportSetItem;
-(NSSet *)supportedReports;
-(BOOL)_anyPrivilegesMatches:(/*^block*/id)arg1 ;
-(void)postProcessWithResponseHeaders:(id)arg1 ;
-(NSSet *)resourceTypeAsStringSet;
-(BOOL)isPrincipal;
-(BOOL)hasReadPrivileges;
-(BOOL)hasWriteContentPrivileges;
-(BOOL)hasWritePropertiesPrivileges;
-(BOOL)hasBindPrivileges;
-(BOOL)hasUnbindPrivileges;
-(BOOL)supportsPrincipalPropertySearchReport;
-(BOOL)supportsSyncCollectionReport;
-(NSURL *)addMemberURL;
@end

