/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:11:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSXPCCoding.h>

@class NSArray, NSString;

@interface SSFamilyCircle : NSObject <SSXPCCoding> {

	NSArray* _familyMembers;
	NSArray* _iTunesAccountNames;

}

@property (nonatomic,retain) NSArray * familyMembers;                   //@synthesize familyMembers=_familyMembers - In the implementation block
@property (nonatomic,retain) NSArray * iTunesAccountNames;              //@synthesize iTunesAccountNames=_iTunesAccountNames - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithCacheRepresentation:(id)arg1 ;
-(id)newCacheRepresentation;
-(id)allITunesIdentifiers;
-(id)allITunesAccountNames;
-(NSArray *)familyMembers;
-(void)setFamilyMembers:(NSArray *)arg1 ;
-(NSArray *)iTunesAccountNames;
-(void)setITunesAccountNames:(NSArray *)arg1 ;
@end

