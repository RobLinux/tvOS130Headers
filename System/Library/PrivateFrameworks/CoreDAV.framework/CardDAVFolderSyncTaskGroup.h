/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:01 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVContainerSyncTaskGroup.h>

@interface CardDAVFolderSyncTaskGroup : CoreDAVContainerSyncTaskGroup {

	BOOL _isInitialSync;

}

@property (assign,nonatomic) BOOL isInitialSync;              //@synthesize isInitialSync=_isInitialSync - In the implementation block
-(BOOL)isInitialSync;
-(void)setIsInitialSync:(BOOL)arg1 ;
-(id)dataContentType;
-(Class)bulkChangeTaskClass;
-(id)copyMultiGetTaskWithURLs:(id)arg1 ;
-(id)copyGetTaskWithURL:(id)arg1 ;
-(id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 syncItemOrder:(BOOL)arg5 context:(id)arg6 accountInfoProvider:(id)arg7 taskManager:(id)arg8 appSpecificDataItemClass:(Class)arg9 ;
-(id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 context:(id)arg5 accountInfoProvider:(id)arg6 taskManager:(id)arg7 appSpecificDataItemClass:(Class)arg8 ;
@end

