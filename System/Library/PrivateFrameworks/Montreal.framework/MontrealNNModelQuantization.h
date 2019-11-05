/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:45 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Montreal/MontrealNNDescription.h>
#import <Montreal/MontrealNNDescriptionProtocol.h>

@class NSString, NSNumber;

@interface MontrealNNModelQuantization : MontrealNNDescription <MontrealNNDescriptionProtocol> {

	NSString* _weightStorage;
	NSNumber* _weightStorageRange;

}

@property (readonly) NSString * weightStorage;                      //@synthesize weightStorage=_weightStorage - In the implementation block
@property (readonly) NSNumber * weightStorageRange;                 //@synthesize weightStorageRange=_weightStorageRange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)weightStorage;
-(NSNumber *)weightStorageRange;
@end

