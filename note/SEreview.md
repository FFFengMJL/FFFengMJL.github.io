---
layout: default
title: 软件工程综述
---
# 软件工程综述

## 主要内容

1. 什么是软件工程
2. 为什么学软工（重要性）
3. 知识体系
4. 若干重要概念
5. 演变与趋势

## 1. 什么是软件工程（是什么）

1. 概念:
> (1). 将**系统化、规范化、可度量**的方法应用与软件的开发、运行和维护的过程，即将工程化应用于软件中。  
> (2). 对(1)中所述方法的研究。  
<p style="text-align: right">——IEEE[IEE93]</p>

> 系统化：目标明确，步骤清楚  
> 规范化：每一步都有自己的标准  
> 可度量：标准可以进行量化的评估  

软件工程：是指导计算机软件开发和维护的工程学科。采用**工程的概念、原理、技术和方法**来开发与维护软件，把经过实践考验而证明正确的*管理技术*和当前能够得到的最好的*技术方法*结合起来，这就是软件工程。  

2. 要素：
* 工程化、管理、技术。融合了多个学科的知识。  
> 一个子程序尽量不超过30行/50行（一页）
> 人的忍耐能力不超过3S——Loading最好不要超过三秒——实在不行，使用**进度条**  
* 人（项目中最重要、最活跃的资源因素）
* 组织的原则和模式、角色定义和分工、人员的配备、绩效的评定等等。
<p style="text-align: right">1922-1995.9 SEI  P-CMM V1.0</p>

> 《人月神话》

3. 开发过程：实质：在**规定时间、费用**内做出符合质量要求的软件（**满足用户需求**）
    1. 需求分析：去除语言**模糊性**
    2. 总体设计
    3. 详细设计：
        * 模块设计：Midware
        * 结构设计

4. 管理：
    * 风险管理（控制意外）
    * 计划于进度管理（控制时间）
    * 配置管理（控制变化）
    * 质量管理（控制错误）
    * 费用管理（控制预算）
    * 人员管理（控制人力）

## 2. 软件工程的重要性（为什么学）

### 【历史角度】发展的必然：**软件危机**

1. 60年代以来，软件生产的**复杂性和高成本**，使大型软件的产生出现了很大的困难。  
2. 软件工程正是为克服软件危机而提出的一种概念，并在实践中不断地探索它的原理，技术和方法。在此过程中，人们研究和借鉴了**工程学的某些原理和方法**，并形成了一门新的学科─软件工程学。  
3. 传统工程行业对软件业的影响：软件行业是一个年轻的行业，建筑业从我们老祖宗挖山洞到盖摩天大楼积累了丰富的工程管理和技术经验。不同时代，**人思考解决的问题大不相同，但人的思维模式和方法却是相对稳定的，经验也是渐进积累的**。新兴行业完全应该继承传统行业的所积累的智慧和财富。  
    * 建筑：规划设计、工程施工、工程监理  
    * 软件：顾问咨询、方案提供、软件设计、软件工厂、软件工程监
理   
> 产业成熟的标志：**分工明确**  
4. 虽然时至今日人们并没有完全克服软件危机，但软件工程却很大的**改善**了软件业的情况，让人们看到了希望，也说明我们还要继续努力，更深入地**认识软件开发管理的规律、深化软件工程的研究和实践**。

### 【社会主义】团队协作的时代——个人英雄主义时代的终结

1. 中国的软件英雄很多。我们需要英雄，但是，如果只有英雄，那么就只有软件、而没有软件业了。能够支撑起民族软件业的只能是靠**工程化思想武装起来的团队**、还要有几只**超级规模的团队**！   
2. 在个人英雄主义时代，对一般软件从业者来讲，会两句DBASE，能写个工资程序、打打报表就能生存，那个时代已经一去不复返了。  
3. 我国的软件开发水平，单从编码来看，我们拥有众多的高水平程序员，绝不逊色于任何国家，但软件开发管理水平与发达国家有很大差距，这也就是我们不能开发出像Office、操作系统之类软件的原因。**我们从单个程序员来说，能够编写出一流的代码，漂亮的界面。但是却去不能协调众多程序员去开发一个项目（工程）软件**。在这一方面说我们中国程序员一个人是一条龙，十个人是一条虫并不为过。  
4. 技术技巧固然重要，但软件开发中最大的问题已不是技术问题，而是**管理问题**！

### 【个人角度】专业人员必备个人素质

1. 基础理论：训练**分析解决问题**的能力，**深层研究**的工具。数学分析训练严密的**逻辑思维**。普通物理和西方哲学史等教会你很多**思维方式**，比如：假说——**大胆假设、认真求证**。  
2. 专业理论：专业理论：数据库理论、网络基础、编译原理等。  
3. 专业技术：程序设计语言等。  
4. 工程技术：软件工程，本、研教育中唯一涉及**工程规范与管理**的课程，它象粘合剂，技术经过它的粘合才能形成软件产品！  
5. 外语：**多门语言多条路**。  
6. **表达与交流**能力：团队内部、与客户通讯的基本素质。  
7. 法律常识与职业道德：知识产权保护、行业特点的职业道德。

> 程序员是一个吃青春饭的行当，也是英雄出少年的行当，就象运动员一样。一个程序员，10年以后很少再只写代码。软件工程是你从程序员到高级程序员、系统分析员，或项目经理、部门经理、CTO一步步迈进必备的知识，积累起来的经验也是你超越年轻人坐在更高职位的资本。  
> 软件行业分工越来越细、一个团队内也有各种角色。软件工程的知识可以使你结合自己的特点**准确定位自己的发展方向**。

## 3. 软工的知识体系——三个层次

1. 过程：做什么 模型、流程、标准——对应**管理要素**。 关键过程域KPA。定义了方法使用的顺序、要求交付的文档资料、为保证质量和协调变更所需要的管理、里程碑、项目管理、人员组织等。   
2. 方法：如何做 往往采用某种特殊的语言或图形表达方法及一套质量保证标准——对应**技术要素**。项目计划与估算、需求分析、总体设计、详细设计、编码、测试及维护的具体做法和基本原则。   
3. 工具：对方法的支撑，自动或半自动的软件开发支撑环境。CASE。  

## 4. 主要概念

### 1. 软件的生存周期

1. 从时间的角度：把周期划分为若干阶段  
2. 划分原则：各阶段的任务彼此间尽可能相对独立，同一个阶段各项任务的**性质尽可能相同**，从而**降低每个阶段任务的复杂性，简化不同阶段之间的联系**，有利于软件开发过程的组织管理。受软件规模、性质、种类、开发方法等因素的影响。  
3. 典型划分GB8567（4时期7阶段）：  
    1. 软件分析时期：问题定义、可行性研究、需求分析  
    2. 软件设计时期：总体设计、详细设计  
    3. 编码与测试时期：编码、测试  
    4. 运行与维护时期  
> 根据不同的软件类型、大小，需对其进行调整  

### 2. 软件开发模型

1. 软件开发模型**描述了软件开发过程中各阶段或活动之间的关系**。它确立了**软件开发和演绎中各阶段的次序限制及活动的准则**。  
2. 主要模型：  
    1. 瀑布模型  
    2. 圆形模型  
    3. 增量模型（8020原则，先开发主要功能，再后续发布新功能）  
    4. 螺旋模型（每一步都进行评估分析）：开发大型高风险软件  
    5. 喷泉模型（可能每个阶段都可能需要更改结构）  
    > RUP模型  
3. RUP的四个阶段：  
    1. 初启：确定目标、范围  
    2. 细化：初步需求分析、初步高层设计、部分详细设计、部分原型构造  
        * 用到的UML语言机制：用例及用例图、类图、活动图、包图、交互图等  
        * 细化结束的条件：主要需求通过用例及用例图描述；重要风险已标示；能够精确估算实现每一用例的时间  
    3. 构造：通过迭代完成对所有用例的软件实现。  
        * 迭代计划及其原则：业务价值大、风险高的用例优先  
        * 迭代过程：针对用例的分析、设计、编码、测试、集成  
        * 用到的UML语言机制  
    4. 移交

### 3. 演变与趋势

#### 道法自然

1. 60年代干打垒：面向语句  
2. 70年代混合结构：面向功能模块  
3. 80年代框架结构：面向对象  
4. 90年代钢结构：面向组件、业务

> 面向对象的软件设计，架构设计  
> 需求分析  
> 结构化定理：顺序、循环、判断可以写出所有单入口单出口的程序

> （程序）流程 --> 树 --> 图 --> （业务）流程  
> 复杂程度螺旋上升