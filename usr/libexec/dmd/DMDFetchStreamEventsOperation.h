/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:35 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/dmd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <dmd/DMDTaskOperation.h>

@interface DMDFetchStreamEventsOperation : DMDTaskOperation
+(id)requiredEntitlements;
+(BOOL)validateRequest:(id)arg1 error:(id*)arg2 ;
+(id)whitelistedClassesForRequest;
-(void)runWithRequest:(id)arg1 ;
-(unsigned long long)queueGroup;
@end

