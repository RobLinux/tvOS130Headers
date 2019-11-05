/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SFSafariCredentialStore : NSObject
+(void)_approvedSharedWebCredentialsDatabaseEntriesForAppWithAppID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)getCredentialsForAppWithAppID:(id)arg1 websiteURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)getCredentialsForAppWithAppID:(id)arg1 externallyVerifiedAndApprovedSharedWebCredentialDomains:(id)arg2 websiteURL:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)_getCredentialsForAppWithApprovedAndValidSharedWebCredentialsDatabaseEntries:(id)arg1 websiteURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)_approvedAndValidSharedWebCredentialsDatabaseEntriesForAppWithAppID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)_credentialsMatchingSharedWebCredentialsDatabaseEntries:(id)arg1 websiteURL:(id)arg2 savedPasswords:(id)arg3 ;
+(id)_highLevelDomainsFromDatabaseEntries:(id)arg1 ;
+(BOOL)_savedPassword:(id)arg1 isRelatedToEntryHighLevelDomains:(id)arg2 andWebsiteURL:(id)arg3 ;
+(void)_sortCredentials:(id)arg1 usingApprovedSharedWebCredentialsDatabaseEntries:(id)arg2 ;
+(void)getApprovedSharedWebCredentialsEntriesForAppWithAppID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)_sharedWebCredentialsDatabaseEntriesForAppWithAppID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)getAllApprovedSharedWebCredentialsEntries:(/*^block*/id)arg1 ;
+(BOOL)isAppAutoFillAvailable;
+(void)getCredentialsForAppWithAppID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)getAllCredentialsWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)getApprovedSharedWebCredentialsEntriesSortedByHighestValueForAppWithAppID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

