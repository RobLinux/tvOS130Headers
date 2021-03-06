/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:08 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AFManagedStore <NSObject>
@required
-(id)domainObjectForKey:(id)arg1;
-(void)setDomainObject:(id)arg1 forKey:(id)arg2;
-(id)dataForKey:(id)arg1 inKnowledgeStoreWithName:(id)arg2;
-(void)setData:(id)arg1 forKey:(id)arg2 inKnowledgeStoreWithName:(id)arg3;
-(void)resetKnowledgeStoreWithName:(id)arg1;

@end

